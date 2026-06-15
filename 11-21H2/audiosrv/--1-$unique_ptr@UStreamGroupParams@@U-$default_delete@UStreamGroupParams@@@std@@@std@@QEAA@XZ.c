/*
 * XREFs of ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x1800FE500
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$0 @ 0x18006FB60 (_BuildDeviceGraphForStream_--_1_--dtor$0.c)
 *     _DeriveStreamGroupParametersForStream_::_1_::dtor$3 @ 0x18006FC80 (_DeriveStreamGroupParametersForStream_--_1_--dtor$3.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x1800FFFB3 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$11.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x1800FE530 (--1StreamGroupParams@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(StreamGroupParams **a1)
{
  StreamGroupParams *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    StreamGroupParams::~StreamGroupParams(*a1);
    operator delete(v1);
  }
}
