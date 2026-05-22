/*
 * XREFs of ?IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ @ 0x18016DA60
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013510 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18005EEE0 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 */

char __fastcall ShellGesturesClientProxy::IsDetachedFromTree(ShellGesturesClientProxy *this)
{
  __int64 v1; // rcx
  char v2; // r11
  __int64 IdForNamespace; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 18);
  v2 = 0;
  if ( v1 )
  {
    IdForNamespace = InputSite::GetIdForNamespace(v1, (__int64)v5, 0);
    if ( *(_BYTE *)(IdForNamespace + 8) == v2 )
      return 1;
  }
  return v2;
}
