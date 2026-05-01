/*
 * XREFs of ??0GhostDivider@@QEAA@XZ @ 0x1805E690C
 * Callers:
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Z @ 0x1805E67C8 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGhostDivider@@@WRL@Microsoft@@QEAA@XZ @ 0x1805E68BC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIGhostDivider@@@WRL@Microsoft@@QEAA@X.c)
 */

GhostDivider *__fastcall GhostDivider::GhostDivider(GhostDivider *this)
{
  GhostDivider *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IGhostDivider>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IGhostDivider>((__int64)this);
  *((_QWORD *)this + 9) = 100LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &GhostDivider::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IGhostDivider>'};
  *((_QWORD *)this + 2) = &GhostDivider::`vftable'{for `CWRLImpWndProc<GhostDivider>'};
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_WORD *)this + 46) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
