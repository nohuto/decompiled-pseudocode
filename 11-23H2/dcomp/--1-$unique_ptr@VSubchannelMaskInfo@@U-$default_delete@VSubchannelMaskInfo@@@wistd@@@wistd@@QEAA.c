/*
 * XREFs of ??1?$unique_ptr@VSubchannelMaskInfo@@U?$default_delete@VSubchannelMaskInfo@@@wistd@@@wistd@@QEAA@XZ @ 0x18016AA38
 * Callers:
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall wistd::unique_ptr<SubchannelMaskInfo,wistd::default_delete<SubchannelMaskInfo>>::~unique_ptr<SubchannelMaskInfo,wistd::default_delete<SubchannelMaskInfo>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete(v1);
}
