/*
 * XREFs of ??1CSurfaceManager@@MEAA@XZ @ 0x180194DAC
 * Callers:
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180194B78 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 */

void __fastcall CSurfaceManager::~CSurfaceManager(CSurfaceManager *this)
{
  const void *v2; // rcx
  struct _RTL_GENERIC_TABLE *v3; // rbx
  PVOID v4; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = (const void *)*((_QWORD *)this + 13);
  if ( v2 )
    UnmapViewOfFile(v2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 12);
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 24);
  while ( 1 )
  {
    RestartKey = 0LL;
    v4 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v4 )
      break;
    if ( !RtlDeleteElementGenericTable(v3, v4) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
}
