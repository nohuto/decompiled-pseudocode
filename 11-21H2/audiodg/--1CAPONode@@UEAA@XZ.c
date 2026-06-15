/*
 * XREFs of ??1CAPONode@@UEAA@XZ @ 0x14000EE00
 * Callers:
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14000CCB0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ??_ECAPONode@@UEAAPEAXI@Z @ 0x1400689F0 (--_ECAPONode@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAPONode::~CAPONode(CAPONode *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  *(_QWORD *)this = &CAPONode::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 36);
  if ( v3 )
    free(v3);
  v4 = (void *)*((_QWORD *)this + 32);
  if ( v4 )
    free(v4);
  v5 = (void *)*((_QWORD *)this + 28);
  if ( v5 )
    free(v5);
  v6 = (void *)*((_QWORD *)this + 24);
  if ( v6 )
    free(v6);
  v7 = (void *)*((_QWORD *)this + 20);
  if ( v7 )
    free(v7);
  v8 = (void *)*((_QWORD *)this + 16);
  if ( v8 )
    free(v8);
  v9 = (void *)*((_QWORD *)this + 12);
  if ( v9 )
    free(v9);
  v10 = (void *)*((_QWORD *)this + 8);
  if ( v10 )
    free(v10);
  v11 = *((_QWORD *)this + 6);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 5);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 4);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 3);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = *((_QWORD *)this + 1);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
}
