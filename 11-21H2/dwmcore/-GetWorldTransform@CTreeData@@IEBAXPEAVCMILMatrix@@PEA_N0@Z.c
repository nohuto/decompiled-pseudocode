/*
 * XREFs of ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x18004BF34
 * Callers:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B660 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CTreeData::GetWorldTransform(CTreeData *this, struct CMILMatrix *a2, bool *a3, struct CMILMatrix *a4)
{
  __int64 v4; // rax
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 34) )
    ModuleFailFastForHRESULT(2291674884LL, retaddr);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 312);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 328);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 344);
  *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 360);
  *((_DWORD *)a2 + 16) = *((_DWORD *)this + 94);
  *a3 = *((_BYTE *)this + 11);
  if ( a4 )
  {
    v4 = *((_QWORD *)this + 37);
    if ( v4 )
    {
      *(_OWORD *)a4 = *(_OWORD *)v4;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(v4 + 16);
      *((_OWORD *)a4 + 2) = *(_OWORD *)(v4 + 32);
      *((_OWORD *)a4 + 3) = *(_OWORD *)(v4 + 48);
      v5 = *(_DWORD *)(v4 + 64);
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)((char *)this + 312);
      *((_OWORD *)a4 + 1) = *(_OWORD *)((char *)this + 328);
      *((_OWORD *)a4 + 2) = *(_OWORD *)((char *)this + 344);
      *((_OWORD *)a4 + 3) = *(_OWORD *)((char *)this + 360);
      v5 = *((_DWORD *)this + 94);
    }
    *((_DWORD *)a4 + 16) = v5;
  }
}
