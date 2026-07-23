/*
 * XREFs of sub_1402A012C @ 0x1402A012C
 * Callers:
 *     sub_140259EC4 @ 0x140259EC4 (sub_140259EC4.c)
 *     sub_14070A268 @ 0x14070A268 (sub_14070A268.c)
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 * Callees:
 *     sub_14029FDC4 @ 0x14029FDC4 (sub_14029FDC4.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402A012C(unsigned int a1, unsigned int a2)
{
  __int64 v2; // r8
  ULONG_PTR v3; // rcx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  struct _KTHREAD *v7; // rcx

  v2 = a1;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    KeBugCheckEx(0x16Du, a2, 0LL, 0LL, 0LL);
  v3 = qword_140C10D98;
  if ( (a2 & 1) != 0 )
    v3 = qword_140C10DB8;
  v4 = -1LL;
  if ( v3 )
  {
    if ( (unsigned int)v2 <= 0x1000 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      v6 = sub_14029FDC4(v3, (unsigned __int64)(v2 + 7) >> 3, v2);
      v7 = KeGetCurrentThread();
      v4 = v6;
      if ( (*((_WORD *)v7 + 243))++ == 0xFFFF && *((struct _KTHREAD **)v7 + 19) != (struct _KTHREAD *)((char *)v7 + 152) )
        KiCheckForKernelApcDelivery();
    }
  }
  return v4;
}
