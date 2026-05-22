/*
 * XREFs of ?Unregister3DCompositor@@YAHXZ @ 0x18007F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180090B8C (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ @ 0x180090EC4 (-Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ.c)
 */

__int64 Unregister3DCompositor(void)
{
  RTL_SRWLOCK *InstanceOffInputThread; // rax

  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  MPC3DStateHelper::Unregister3DCompositor(InstanceOffInputThread);
  return 1LL;
}
