/*
 * XREFs of ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x1805E3F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x1805E1D2C (-CalculatePointFromRect@JointResize@@AEAA-AUtagPOINT@@UtagRECT@@@Z.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x1805E2808 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowSizeUpdated(JointResize *this, struct tagRECT *a2)
{
  LONG left; // ecx
  LONG v5; // edx
  LONG v6; // eax
  unsigned __int64 top; // rcx
  LONG v8; // eax
  __int64 (__fastcall ***v9)(ApplicationViewHelpers *, GUID *, __int64); // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  struct tagRECT v15; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v16; // [rsp+30h] [rbp-10h] BYREF
  struct tagRECT v17; // [rsp+50h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 168) )
  {
    v15 = *a2;
    JointResize::CalculatePointFromRect((JointResize *)((char *)this - 88), &v17, &v15.left);
    left = v17.left;
    v5 = *((_DWORD *)this + 48);
    if ( v17.left < *((_DWORD *)this + 46) )
      left = *((_DWORD *)this + 46);
    v6 = *((_DWORD *)this + 47);
    if ( v5 >= left )
      v5 = left;
    top = (unsigned int)v17.top;
    v17.left = v5;
    if ( v17.top < v6 )
      top = (unsigned int)v6;
    v8 = *((_DWORD *)this + 49);
    if ( v8 >= (int)top )
      v8 = top;
    v17.top = v8;
    if ( v5 != *((_DWORD *)this + 50) || v8 != *((_DWORD *)this + 51) )
    {
      v9 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))*((_QWORD *)this + 13);
      v15 = *a2;
      *((_QWORD *)this + 25) = *(_QWORD *)&v17.left;
      v15 = *JointResize::ComputeExtendedViewRect((JointResize *)top, &v16, v9, &v15);
      v10 = (_QWORD *)JointResize::CalculatePointFromRect((JointResize *)((char *)this - 88), &v17, &v15.left);
      v11 = *((_QWORD *)this + 11);
      if ( v11 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, *v10);
      if ( !*((_BYTE *)this + 344) )
      {
        v12 = (__int64 *)*((_QWORD *)this + 18);
        *((_BYTE *)this + 344) = 1;
        v13 = (_QWORD *)*((_QWORD *)this + 14);
        v14 = *v12;
        if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 15) - (_QWORD)v13) >> 5) == 1 )
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v14 + 40))(v12, *((_QWORD *)this + 13), *v13);
        else
          (*(void (__fastcall **)(__int64 *, _QWORD))(v14 + 32))(v12, *((_QWORD *)this + 13));
      }
    }
  }
}
