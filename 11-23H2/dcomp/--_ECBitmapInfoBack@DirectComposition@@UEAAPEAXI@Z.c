/*
 * XREFs of ??_ECBitmapInfoBack@DirectComposition@@UEAAPEAXI@Z @ 0x18002AD50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

DirectComposition::CBitmapInfoBack *__fastcall DirectComposition::CBitmapInfoBack::`vector deleting destructor'(
        DirectComposition::CBitmapInfoBack *this,
        char a2)
{
  volatile signed __int32 *v2; // rsi
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  volatile signed __int32 *v8; // rdi
  HANDLE ProcessHeap; // rax

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = &DirectComposition::CBitmapInfo::`vftable';
  if ( v2 )
  {
    v5 = v2 + 2;
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 2));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 32LL))(v2);
      if ( _InterlockedExchangeAdd(v5, 0xFFFFFFFF) == 1 )
      {
        --*v5;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      }
    }
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 352) )
    {
      v7 = v6 + 8;
      v8 = (volatile signed __int32 *)(v6 + 16);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), 0xFFFFFFFF) == 1 )
      {
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 16));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
        if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
        {
          --*v8;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 24) + 16LL))(*(_QWORD *)(v6 + 24));
    }
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0xA8uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
