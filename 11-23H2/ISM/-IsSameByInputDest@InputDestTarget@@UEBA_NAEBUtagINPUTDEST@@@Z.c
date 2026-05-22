/*
 * XREFs of ?IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x18000C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteFromInputDest@InputDestTarget@@AEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagINPUTDEST@@@Z @ 0x180040A88 (-GetInputSiteFromInputDest@InputDestTarget@@AEBA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagI.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180059150 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall InputDestTarget::IsSameByInputDest(InputDestTarget *this, const struct tagINPUTDEST *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  bool v7; // bl
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  InputDestTarget::GetInputSiteFromInputDest(this, &v8, a2);
  v4 = *((_QWORD *)this + 8);
  if ( v4 || v8 )
  {
    v7 = v4 == v8;
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v8);
    return v7;
  }
  else
  {
    if ( *((_DWORD *)a2 + 10) != *((_DWORD *)this + 6)
      || *((_DWORD *)a2 + 11) != *((_DWORD *)this + 7)
      || *((_QWORD *)a2 + 6) != *((_QWORD *)this + 4)
      || *((_QWORD *)a2 + 7) != *((_QWORD *)this + 5) )
    {
      return 0;
    }
    v5 = *((_QWORD *)a2 + 8) - *((_QWORD *)this + 6);
    if ( !v5 )
      v5 = *((_QWORD *)a2 + 9) - *((_QWORD *)this + 7);
    return !v5;
  }
}
