/*
 * XREFs of SepReferenceTokenUsingPseudoHandle @ 0x1402B2E40
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1402B0290 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     SepSidFromProcessProtection @ 0x1402B3340 (SepSidFromProcessProtection.c)
 *     RtlSidDominatesForTrust @ 0x1402B33C0 (RtlSidDominatesForTrust.c)
 *     PsReferenceEffectiveToken @ 0x14071D75C (PsReferenceEffectiveToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x14071D810 (PsReferenceImpersonationTokenEx.c)
 */

__int64 __fastcall SepReferenceTokenUsingPseudoHandle(
        __int64 a1,
        int a2,
        ULONG_PTR *a3,
        _BYTE *a4,
        _QWORD *DominatesTrust)
{
  _QWORD *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  void *v9; // rax
  void *v10; // rbp
  PSID v11; // r9
  ULONG_PTR v12; // r11
  void *v14; // rax
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v16 = a2;
  v5 = DominatesTrust;
  *a3 = 0LL;
  *a4 = 0;
  v17 = 0;
  *v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  LOBYTE(v16) = 0;
  if ( a1 == -4 )
  {
    v12 = PsReferencePrimaryTokenWithTag((__int64)CurrentThread->ApcState.Process, 0x74726853u);
LABEL_6:
    *a3 = v12;
    return 0LL;
  }
  if ( a1 != -5 )
  {
    v9 = (void *)PsReferenceEffectiveToken(
                   (_DWORD)CurrentThread,
                   1953654867,
                   (unsigned int)&v15,
                   (unsigned int)&DominatesTrust,
                   (__int64)&v17,
                   (__int64)&v16);
    if ( v15 == 2 && !v17 )
    {
      ObfDereferenceObjectWithTag(v9, 0x74726853u);
      return 3221225638LL;
    }
    goto LABEL_4;
  }
  v14 = (void *)PsReferenceImpersonationTokenEx(CurrentThread, 0LL, 1953654867LL, &v15, &DominatesTrust, &v17, &v16);
  if ( v14 )
  {
    if ( !v17 )
    {
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      return 3221225638LL;
    }
LABEL_4:
    *a4 = 0;
    *v5 = 0LL;
    LOBYTE(DominatesTrust) = 0;
    v10 = (void *)SepSidFromProcessProtection(&v16);
    RtlSidDominatesForTrust(v10, v11, (PBOOLEAN)&DominatesTrust);
    if ( !(_BYTE)DominatesTrust )
    {
      *a4 = 1;
      *v5 = v10;
    }
    goto LABEL_6;
  }
  return 3221225596LL;
}
