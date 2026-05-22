/*
 * XREFs of ??_GPnpDevice@@UEAAPEAXI@Z @ 0x18001D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
PnpDevice *__fastcall PnpDevice::`scalar deleting destructor'(PnpDevice *this, char a2)
{
  void *v4; // rsi
  RefCountedObject *v5; // rcx

  *(_QWORD *)this = &PnpDevice::`vftable';
  v4 = (void *)_InterlockedExchange64((volatile __int64 *)this + 5, -1LL);
  if ( v4 != (void *)-1LL )
  {
    CancelIoEx(v4, 0LL);
    CloseHandle(v4);
  }
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  v5 = (RefCountedObject *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RefCountedObject::Release(v5);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x80uLL);
    else
      free(this);
  }
  return this;
}
