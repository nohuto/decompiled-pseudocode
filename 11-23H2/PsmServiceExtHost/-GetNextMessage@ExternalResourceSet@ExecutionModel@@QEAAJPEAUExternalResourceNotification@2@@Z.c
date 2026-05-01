/*
 * XREFs of ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x18008B44C
 * Callers:
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x180082B94 (-RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004AA1C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::GetNextMessage(
        ExecutionModel::ExternalResourceSet *this,
        struct ExecutionModel::ExternalResourceNotification *a2)
{
  _QWORD *v2; // rax
  _QWORD *v4; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  int v9; // ebx

  v2 = (_QWORD *)((char *)this + 1312);
  v4 = (_QWORD *)*((_QWORD *)this + 164);
  if ( (_QWORD *)*v2 == v2 )
    return 2147943568LL;
  v7 = (_QWORD *)v4[1];
  v8 = *v4;
  v9 = *((_DWORD *)v4 + 4);
  *v7 = *v4;
  *(_QWORD *)(v8 + 8) = v7;
  operator delete(v4);
  --*((_QWORD *)this + 166);
  *(_OWORD *)a2 = 0LL;
  *(_DWORD *)a2 = v9;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 162);
  return 0LL;
}
