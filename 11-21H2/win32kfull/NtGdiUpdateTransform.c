/*
 * XREFs of NtGdiUpdateTransform @ 0x1C02B5C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiUpdateTransform(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    DC::vUpdateWtoDXform(v3[0]);
  else
    v1 = 0;
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
