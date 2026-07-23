/*
 * XREFs of sub_1409B205C @ 0x1409B205C
 * Callers:
 *     sub_140631A8C @ 0x140631A8C (sub_140631A8C.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045ECB0 @ 0x14045ECB0 (sub_14045ECB0.c)
 */

__int64 __fastcall sub_1409B205C(__int64 a1)
{
  _OWORD *v2; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  struct _KTHREAD *v8; // rax
  _BYTE v10[400]; // [rsp+20h] [rbp-1A8h] BYREF

  v2 = (_OWORD *)sub_14045ECB0((__int64)KeGetCurrentThread(), 0LL);
  result = 0LL;
  if ( (_QWORD)xmmword_140C1BE30 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    v5 = 3LL;
    v6 = v10;
    do
    {
      *v6 = *v2;
      v6[1] = v2[1];
      v6[2] = v2[2];
      v6[3] = v2[3];
      v6[4] = v2[4];
      v6[5] = v2[5];
      v6[6] = v2[6];
      v6 += 8;
      v7 = v2[7];
      v2 += 8;
      *(v6 - 1) = v7;
      --v5;
    }
    while ( v5 );
    *v6 = *v2;
    v8 = KeGetCurrentThread();
    if ( (*((_WORD *)v8 + 243))++ == 0xFFFF && *((struct _KTHREAD **)v8 + 19) != (struct _KTHREAD *)((char *)v8 + 152) )
      KiCheckForKernelApcDelivery();
    return sub_14042A5E0(v10, a1);
  }
  return result;
}
