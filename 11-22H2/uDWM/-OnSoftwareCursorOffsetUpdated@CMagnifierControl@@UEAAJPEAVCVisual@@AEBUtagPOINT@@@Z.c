/*
 * XREFs of ?OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z @ 0x1800CBDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CC01C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 *     ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z @ 0x1800CC0A0 (-UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnSoftwareCursorOffsetUpdated(
        CMagnifierControl *this,
        struct CVisual *a2,
        const struct tagPOINT *a3)
{
  __int64 v6; // rdx
  struct tagPOINT v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // r8d
  LONG v10; // esi
  LONG v11; // ebx
  struct tagPOINT *v12; // r14
  LONG v13; // esi
  LONG v14; // ebx
  struct tagPOINT v16; // [rsp+20h] [rbp-20h] BYREF
  tagCURSORINFO pci; // [rsp+28h] [rbp-18h] BYREF
  struct tagPOINT Point; // [rsp+60h] [rbp+20h] BYREF
  tagLASTINPUTINFO plii; // [rsp+78h] [rbp+38h] BYREF

  if ( !*((_BYTE *)this + 112) )
    return 0LL;
  plii.dwTime = 0;
  memset(&pci, 0, sizeof(pci));
  pci.cbSize = 24;
  plii.cbSize = 8;
  GetLastInputInfo(&plii);
  if ( GetCursorInfo(&pci) )
  {
    Point = 0LL;
    v7 = 0LL;
    if ( GetCursorPos(&Point) )
    {
      v16.x = Point.x - a3->x;
      v16.y = Point.y - a3->y;
      v7 = v16;
    }
    v8 = *((_QWORD *)a2 + 16);
    v9 = *((_DWORD *)this + 42);
    if ( (HCURSOR)*((_QWORD *)this + 19) != pci.hCursor || *((_QWORD *)this + 20) != v8 )
    {
      *((_QWORD *)this + 19) = pci.hCursor;
      goto LABEL_12;
    }
    if ( v9 < 2 )
    {
      if ( v7.x == *((_DWORD *)this + 29) || v7.y == *((_DWORD *)this + 30) )
      {
        *((_DWORD *)this + 42) = v9 + 1;
        goto LABEL_13;
      }
LABEL_12:
      *((_DWORD *)this + 42) = 0;
      *((_QWORD *)this + 20) = v8;
      *(struct tagPOINT *)((char *)this + 116) = v7;
    }
  }
LABEL_13:
  if ( *((_QWORD *)this + 4) )
  {
    v10 = a3->x + *((_DWORD *)this + 29);
    v11 = a3->y + *((_DWORD *)this + 30);
    v12 = (struct tagPOINT *)((char *)this + 124);
    Point.x = v10;
    Point.y = v11;
    if ( v10 != *((_DWORD *)this + 31) || v11 != *((_DWORD *)this + 32) )
    {
      LOBYTE(v6) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetImpl'::`2'::impl,
        v6);
      v13 = v10 - v12->x;
      v14 = v11 - *((_DWORD *)this + 32);
      *v12 = Point;
      v16.x = v13;
      v16.y = v14;
      CMagnifierControl::UpdateFullscreenBoundsFromSoftwareCursorOffset(
        (CMagnifierControl *)((char *)this - 16),
        (const struct tagPOINT *)((char *)this + 124),
        &v16);
    }
  }
  return 0LL;
}
