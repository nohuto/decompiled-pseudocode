/*
 * XREFs of vSrcTranCopyS8D16 @ 0x1C0278F70
 * Callers:
 *     <none>
 * Callees:
 *     ?vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z @ 0x1C0276E94 (-vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AXPEBE00JPEAPEAG@Z0@Z.c)
 */

void __fastcall vSrcTranCopyS8D16(
        unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  unsigned __int8 *v14; // rbx
  int v15; // edi
  unsigned int v16; // eax
  void (*v17)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **); // [rsp+58h] [rbp-50h]
  unsigned __int8 *v18; // [rsp+B0h] [rbp+8h]

  v18 = a1;
  v14 = &gajCopyBuffer;
  v15 = 0;
  v16 = 2 * (a6 - a5) + 8;
  if ( v16 > 0x1F40 )
  {
    v14 = (unsigned __int8 *)Win32AllocPool(v16, 1869899079LL);
    if ( !v14 )
      return;
    v15 = 1;
    a1 = v18;
  }
  vSrcTranCopyS8D16New(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, v17, v14);
  if ( v15 )
    Win32FreePool(v14);
}
