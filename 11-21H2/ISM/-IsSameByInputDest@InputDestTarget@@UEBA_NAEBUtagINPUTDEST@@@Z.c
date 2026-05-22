/*
 * XREFs of ?IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x180005470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteFromInputDest@InputDestTarget@@AEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagINPUTDEST@@@Z @ 0x18004D884 (-GetInputSiteFromInputDest@InputDestTarget@@AEBA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDestTarget::IsSameByInputDest(InputDestTarget *this, const struct tagINPUTDEST *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  unsigned __int8 v8; // bl
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  InputDestTarget::GetInputSiteFromInputDest(this, &v10, a2);
  v4 = *((_QWORD *)this + 8);
  v5 = v10;
  if ( v4 )
  {
    v7 = v4 == v10;
  }
  else
  {
    if ( v10
      || *((_DWORD *)a2 + 10) != *((_DWORD *)this + 6)
      || *((_DWORD *)a2 + 11) != *((_DWORD *)this + 7)
      || *((_QWORD *)a2 + 6) != *((_QWORD *)this + 4)
      || *((_QWORD *)a2 + 7) != *((_QWORD *)this + 5) )
    {
      goto LABEL_16;
    }
    v6 = *((_QWORD *)a2 + 8) - *((_QWORD *)this + 6);
    if ( !v6 )
      v6 = *((_QWORD *)a2 + 9) - *((_QWORD *)this + 7);
    v7 = v6 == 0;
  }
  if ( v7 )
  {
    v8 = 1;
    goto LABEL_12;
  }
LABEL_16:
  v8 = 0;
LABEL_12:
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v8;
}
