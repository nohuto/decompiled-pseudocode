/*
 * XREFs of ?Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C2BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::SetDefaultApplicationService::Invoke(
        CreativeFramework::Actions::SetDefaultApplicationService *this)
{
  __int64 v1; // r8
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx

  v1 = *((unsigned int *)this + 26);
  v2 = (_QWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v2 = (_QWORD *)*v2;
  v3 = (_QWORD *)((char *)this + 8);
  if ( v3[3] >= 8uLL )
    v3 = (_QWORD *)*v3;
  CreativeFramework::Actions::SetDefaultApplication(v3, v2, v1);
}
