/*
 * XREFs of ??0CDummyUnknown@@QEAA@W4FOLDER_ENUM_MODE@@@Z @ 0x18079A538
 * Callers:
 *     BindCtx_RegisterFolderEnumMode @ 0x18079A834 (BindCtx_RegisterFolderEnumMode.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180100920 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

CDummyUnknown *__fastcall CDummyUnknown::CDummyUnknown(CDummyUnknown *this, enum FOLDER_ENUM_MODE a2)
{
  CDummyUnknown *result; // rax

  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  IApplicationViewChangeListener::IApplicationViewChangeListener((CDummyUnknown *)((char *)this + 8));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CDummyUnknown *)((char *)this + 16));
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CDummyUnknown::`vftable'{for `IOleWindow'};
  *((_QWORD *)this + 1) = &CDummyUnknown::`vftable'{for `IPersist'};
  *((_QWORD *)this + 2) = &CDummyUnknown::`vftable'{for `IObjectWithFolderEnumMode'};
  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 14) = 1;
  result = this;
  *(GUID *)((char *)this + 40) = GUID_NULL;
  return result;
}
