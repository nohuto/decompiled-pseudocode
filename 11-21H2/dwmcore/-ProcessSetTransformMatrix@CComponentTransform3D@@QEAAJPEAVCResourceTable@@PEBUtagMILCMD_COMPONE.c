/*
 * XREFs of ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1800E8650
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform3D::ProcessSetTransformMatrix(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803D0168)(
           (char *)this + SDWORD2(xmmword_1803D0168),
           &CComponentTransform3D::sc_TransformMatrix,
           (char *)a3 + 8);
}
