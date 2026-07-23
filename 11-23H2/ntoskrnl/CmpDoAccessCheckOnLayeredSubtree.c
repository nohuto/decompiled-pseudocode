/*
 * XREFs of CmpDoAccessCheckOnLayeredSubtree @ 0x140A1B988
 * Callers:
 *     CmSaveKey @ 0x140A0BC40 (CmSaveKey.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D56B0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1407D1F2C (CmpInitializeKeyNodeStack.c)
 *     CmpCheckKeyNodeStackAccess @ 0x140A1B570 (CmpCheckKeyNodeStackAccess.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A20648 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140A208D0 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140A20950 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140A20AE8 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140A20B24 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 */

__int64 __fastcall CmpDoAccessCheckOnLayeredSubtree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        ACCESS_MASK a5,
        char a6)
{
  char v10; // si
  __int64 SecurityCacheEntryForKcbStack; // rax
  int v12; // ebx
  int v13; // eax
  int i; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-79h] BYREF
  __int64 v19; // [rsp+28h] [rbp-71h] BYREF
  _WORD v20[56]; // [rsp+30h] [rbp-69h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  memset(&v20[1], 0, 0x66uLL);
  v20[0] = -2;
  CmpInitializeKeyNodeStack(&v20[8]);
  v10 = (a6 & 2) != 0;
  if ( (a6 & 1) != 0 )
  {
    if ( a1 )
    {
      SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL);
      v12 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32), a4, a5, v10);
      if ( v12 < 0 )
        goto LABEL_18;
      goto LABEL_7;
    }
    v12 = CmpCheckKeyNodeStackAccess(a3, a4, a5, (a6 & 2) != 0);
    if ( v12 < 0 )
      goto LABEL_18;
  }
  if ( a1 )
  {
LABEL_7:
    v13 = CmpSubtreeEnumeratorStartForKcbStack(v20, a1);
    goto LABEL_9;
  }
  v13 = CmpSubtreeEnumeratorStartForKeyNodeStack(v20, a3);
LABEL_9:
  v12 = v13;
  if ( v13 >= 0 )
  {
    for ( i = CmpSubtreeEnumeratorAdvance(v20); i != -2147483622; i = CmpSubtreeEnumeratorAdvance(v20) )
    {
      CmpSubtreeEnumeratorGetCurrentKeyStacks(v20, &v18, &v19);
      if ( v18 )
      {
        v15 = CmpGetSecurityCacheEntryForKcbStack(v18, a2, 0LL);
        v16 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(v15 + 32), a4, a5, v10);
      }
      else
      {
        v16 = CmpCheckKeyNodeStackAccess(v19, a4, a5, v10);
      }
      v12 = v16;
      if ( v16 < 0 )
        goto LABEL_18;
    }
    v12 = 0;
  }
LABEL_18:
  CmpSubtreeEnumeratorCleanup(v20);
  return (unsigned int)v12;
}
