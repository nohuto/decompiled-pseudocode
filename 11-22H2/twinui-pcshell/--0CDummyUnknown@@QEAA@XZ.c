/*
 * XREFs of ??0CDummyUnknown@@QEAA@XZ @ 0x18060A650
 * Callers:
 *     BindCtx_AddObjectParam_0 @ 0x18079A7AC (BindCtx_AddObjectParam_0.c)
 * Callees:
 *     <none>
 */

CDummyUnknown *__fastcall CDummyUnknown::CDummyUnknown(CDummyUnknown *this)
{
  CDummyUnknown *result; // rax

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CDummyUnknown::`vftable'{for `IOleWindow'};
  *((_QWORD *)this + 1) = &CDummyUnknown::`vftable'{for `IPersist'};
  *((_QWORD *)this + 2) = &CDummyUnknown::`vftable'{for `IObjectWithFolderEnumMode'};
  result = this;
  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 14) = 0;
  *(GUID *)((char *)this + 40) = GUID_NULL;
  return result;
}
