/*
 * XREFs of ?CommitAttachCount@CConnectionNode@@QEAAXXZ @ 0x14008178C
 * Callers:
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x14000CCB0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CConnectionNode::CommitAttachCount(CConnectionNode *this)
{
  int v1; // eax
  bool v2; // zf

  v1 = *((_DWORD *)this + 3);
  v2 = v1 + *((_DWORD *)this + 2) == 0;
  *((_DWORD *)this + 2) += v1;
  *((_DWORD *)this + 3) = 0;
  if ( v2 )
    *((_QWORD *)this + 19) = 0LL;
}
