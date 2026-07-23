/*
 * XREFs of sub_140236500 @ 0x140236500
 * Callers:
 *     sub_1402364B0 @ 0x1402364B0 (sub_1402364B0.c)
 * Callees:
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140236500(_DWORD *a1)
{
  ULONG_PTR v1; // rbx
  int v3; // eax
  __int64 v5; // rax
  ULONG_PTR BugCheckParameter4; // r8
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  v1 = qword_140C54A88;
  v7[0] = 0LL;
  v8 = 0;
  LODWORD(v7[0]) = *(_DWORD *)(qword_140C54A88 + 240);
  if ( *(_QWORD *)(qword_140C54A88 + 184) )
  {
    v3 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), (char *)v7 + 4);
    if ( ((v3 - 2) & 0xFFFFFFFD) == 0 )
      return 3221225473LL;
    switch ( v3 )
    {
      case 0:
        KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(v1 + 224), v1, 0LL);
      case 1:
        v5 = sub_1402520D4(v7, &v8);
        if ( !v5 )
        {
          sub_14051E038(
            v1,
            18,
            HIDWORD(v7[0]),
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
            3693);
          KeBugCheckEx(0x5Cu, 0x203uLL, *(int *)(v1 + 224), v1, BugCheckParameter4);
        }
        *a1 = *(_DWORD *)(56LL * v8 + *(_QWORD *)(v5 + 40) + 48);
        return 0LL;
      case 3:
        *a1 = 0;
        return 0LL;
    }
  }
  return 3221225659LL;
}
