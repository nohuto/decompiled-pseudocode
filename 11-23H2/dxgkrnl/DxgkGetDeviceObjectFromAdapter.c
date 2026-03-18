/*
 * XREFs of DxgkGetDeviceObjectFromAdapter @ 0x1C02C2828
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C03A4C34 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B5BA4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkGetDeviceObjectFromAdapter(unsigned int a1, __int64 a2, _QWORD *a3)
{
  struct DXGADAPTER *v4; // rdi
  void *v5; // rcx
  unsigned int v6; // ebx
  struct DXGADAPTER *v8[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+40h] [rbp-18h]

  v8[0] = 0LL;
  if ( a1 && (DXGADAPTER_REFERENCE::AssignByHandle(v8, a1), (v4 = v8[0]) != 0LL) )
  {
    v10 = v8[0];
    v11 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
    v5 = (void *)*((_QWORD *)v4 + 27);
    *a3 = v5;
    if ( v5 )
    {
      ObfReferenceObject(v5);
      v6 = 0;
    }
    else
    {
      v6 = -1073741130;
      WdLogSingleEntry2(3LL, v4, -1073741130LL);
    }
    if ( v11 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  }
  else
  {
    v6 = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v8, 0LL);
  return v6;
}
