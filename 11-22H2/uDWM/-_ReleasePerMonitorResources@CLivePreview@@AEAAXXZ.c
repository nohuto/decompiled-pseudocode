/*
 * XREFs of ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800C8CD8
 * Callers:
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800C65B0 (--1CLivePreview@@MEAA@XZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C73A0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CLivePreview::_ReleasePerMonitorResources(CLivePreview *this)
{
  unsigned int v1; // ebp
  char *i; // rbx
  __int64 v4; // rdi
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx

  v1 = 0;
  for ( i = (char *)this + 376; v1 < *((_DWORD *)this + 100); ++v1 )
  {
    v4 = 136LL * v1;
    v5 = *(CBaseObject **)(*(_QWORD *)i + v4 + 16);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *(_QWORD *)(*(_QWORD *)i + v4 + 16) = 0LL;
    }
    v6 = *(CBaseObject **)(*(_QWORD *)i + v4 + 24);
    if ( v6 )
    {
      CBaseObject::Release(v6);
      *(_QWORD *)(*(_QWORD *)i + v4 + 24) = 0LL;
    }
    v7 = *(CBaseObject **)(*(_QWORD *)i + v4 + 32);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *(_QWORD *)(*(_QWORD *)i + v4 + 32) = 0LL;
    }
    v8 = *(CBaseObject **)(*(_QWORD *)i + v4 + 56);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *(_QWORD *)(*(_QWORD *)i + v4 + 56) = 0LL;
    }
    v9 = *(CBaseObject **)(*(_QWORD *)i + v4 + 64);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *(_QWORD *)(*(_QWORD *)i + v4 + 64) = 0LL;
    }
    v10 = *(CBaseObject **)(*(_QWORD *)i + v4 + 72);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *(_QWORD *)(*(_QWORD *)i + v4 + 72) = 0LL;
    }
    v11 = *(CBaseObject **)(*(_QWORD *)i + v4 + 104);
    if ( v11 )
    {
      CBaseObject::Release(v11);
      *(_QWORD *)(*(_QWORD *)i + v4 + 104) = 0LL;
    }
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)i, 0x88u);
}
