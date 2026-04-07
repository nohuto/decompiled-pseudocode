/*
 * XREFs of ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180027768
 * Callers:
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18000FD6C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow3D::ReleaseSceneObjects(CTopLevelWindow3D *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  __int64 v6; // rax

  v2 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 43) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 44) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 45);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 45) = 0LL;
  }
  *((_BYTE *)this + 299) = 0;
  v5 = (CBaseObject *)*((_QWORD *)this + 68);
  *((_QWORD *)this + 68) = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 616) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 16LL) + 400LL))(
    *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL),
    *(unsigned int *)(*(_QWORD *)(v6 + 16) + 24LL),
    0LL);
}
