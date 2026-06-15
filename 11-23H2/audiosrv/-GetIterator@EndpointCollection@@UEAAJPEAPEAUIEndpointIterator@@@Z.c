/*
 * XREFs of ?GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z @ 0x1800069B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointCollection::GetIterator(EndpointCollection *this, struct IEndpointIterator **a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  HANDLE ProcessHeap; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  int v9; // eax

  v4 = 0;
  if ( !a2 )
    return (unsigned int)-2147467261;
  *a2 = 0LL;
  v5 = 0;
  if ( !this )
    return (unsigned int)-2147024809;
  *a2 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v8 = v7;
  if ( !v7 )
    return (unsigned int)-2147024882;
  *((_DWORD *)v7 + 4) = 1;
  *v7 = &EndpointIterator::`vftable'{for `IEndpointIterator'};
  v7[1] = &EndpointIterator::`vftable'{for `CUnknown'};
  v7[4] = 0LL;
  *((_DWORD *)v7 + 10) = 0;
  v7[3] = this;
  (*(void (__fastcall **)(EndpointCollection *))(*(_QWORD *)this + 8LL))(this);
  EnterCriticalSection((LPCRITICAL_SECTION)(v8[3] + 72LL));
  v9 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IEndpointIterator **))*v8)(
         v8,
         &GUID_d4097df1_7f94_44a5_9922_1146dd4dbdaa,
         a2);
  if ( v9 < 0 )
    v5 = v9;
  (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  if ( v5 < 0 )
    return (unsigned int)v5;
  return v4;
}
