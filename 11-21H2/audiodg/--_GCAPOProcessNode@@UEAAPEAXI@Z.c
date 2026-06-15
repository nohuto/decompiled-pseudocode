/*
 * XREFs of ??_GCAPOProcessNode@@UEAAPEAXI@Z @ 0x140013BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAPOProcessNode *__fastcall CAPOProcessNode::`scalar deleting destructor'(CAPOProcessNode *this, char a2)
{
  _QWORD *v4; // rdi
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &CAPOProcessNode::`vftable';
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = (void *)v4[7];
    v4[7] = 0LL;
    if ( v5 )
      CoTaskMemFree(v5);
    v6 = v4[5];
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    operator delete(v4);
  }
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CProcessNode::`vftable';
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 1);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
