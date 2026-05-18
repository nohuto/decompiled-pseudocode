/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18001C144
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18000B9A0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x180025A6C (--1-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ.c)
 *     ?PrepareScreenCaptureBuffer@RenderDevice@Engine@Spectre@@IEAAPEAEAEAUScreenCapture@23@AEBVFrameBuffer@23@_K@Z @ 0x180026F00 (-PrepareScreenCaptureBuffer@RenderDevice@Engine@Spectre@@IEAAPEAEAEAUScreenCapture@23@AEBVFrameB.c)
 *     ??$_Return_temporary_buffer@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x18003A9A4 (--$_Return_temporary_buffer@V-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXQEAV-$shared.c)
 *     ??$_Return_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@@YAXQEAUNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@Z @ 0x1800950D8 (--$_Return_temporary_buffer@UNodeInfo@DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@@std@.c)
 *     ?ReleaseBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXPEAUScreenCapture@34@@Z @ 0x1800C7100 (-ReleaseBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXPEAUScreenCapture@34@@Z.c)
 *     ?_Destroy@?$_Ref_count_resource@PEAEU?$default_delete@$$BY0A@E@std@@@std@@EEAAXXZ @ 0x1800D8960 (-_Destroy@-$_Ref_count_resource@PEAEU-$default_delete@$$BY0A@E@std@@@std@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete(void *a1)
{
  DefaultHeap::Free(a1);
}
