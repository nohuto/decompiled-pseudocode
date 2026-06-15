/*
 * XREFs of ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x1800C2E60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CAudioSrv@@UEAA@XZ @ 0x1800C28D8 (--1CAudioSrv@@UEAA@XZ.c)
 */

CAudioSrv *__fastcall CAudioSrv::`scalar deleting destructor'(CAudioSrv *this, char a2)
{
  CAudioSrv::~CAudioSrv(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
