/*
 * XREFs of ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x18007F890
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180090B8C (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Register3DCompositor@MPC3DStateHelper@@QEAAXPEAUIUnknown@@@Z @ 0x180090D6C (-Register3DCompositor@MPC3DStateHelper@@QEAAXPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Register3DCompositor(struct IUnknown *a1)
{
  MPC3DStateHelper *InstanceOffInputThread; // rax

  InstanceOffInputThread = MPC3DStateHelper::GetInstanceOffInputThread();
  MPC3DStateHelper::Register3DCompositor(InstanceOffInputThread, a1);
  return 1LL;
}
