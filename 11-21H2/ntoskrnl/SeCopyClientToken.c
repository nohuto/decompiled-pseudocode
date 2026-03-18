/*
 * XREFs of SeCopyClientToken @ 0x14072295C
 * Callers:
 *     SepCreateClientSecurityEx @ 0x140727350 (SepCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C61B0 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SepFinalizeTokenAcls @ 0x140659D50 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140724550 (SepAppendAceToTokenObjectAcl.c)
 *     SepSetTokenTrust @ 0x1407259B0 (SepSetTokenTrust.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 */

__int64 __fastcall SeCopyClientToken(int a1, int a2, __int64 a3, char a4, __int64 a5, PVOID *a6)
{
  int inserted; // ebx
  _QWORD *v8; // rcx
  __int64 v10; // r8
  int appended; // eax
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v13[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+68h] [rbp-18h]

  v13[0] = 48LL;
  Object = 0LL;
  memset(&v13[1], 0, 24);
  v14 = 0LL;
  inserted = SepDuplicateToken(a1, (unsigned int)v13, 0, 2, a2, 0, 0, (__int64)&Object);
  if ( inserted < 0 )
    goto LABEL_11;
  if ( a4 )
  {
    inserted = SepSetTokenTrust(Object, a5);
    if ( inserted < 0 )
      goto LABEL_11;
  }
  inserted = ObInsertObjectEx(Object, 0LL, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_11;
  v8 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v10 = *((_QWORD *)Object + 98);
    if ( v10 )
    {
      appended = SepAppendAceToTokenObjectAcl(Object, 983551LL, v10);
      v8 = Object;
      inserted = appended;
      if ( appended < 0 )
      {
        ObfDereferenceObject(Object);
LABEL_11:
        *a6 = 0LL;
        return (unsigned int)inserted;
      }
    }
  }
  SepFinalizeTokenAcls(v8);
  *a6 = Object;
  return (unsigned int)inserted;
}
