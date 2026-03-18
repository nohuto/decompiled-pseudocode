/*
 * XREFs of VidMmCreateProcess @ 0x1C00015E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C002CA14 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0082118 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??0VIDMM_PROCESS@@QEAA@XZ @ 0x1C0082C30 (--0VIDMM_PROCESS@@QEAA@XZ.c)
 */

VIDMM_PROCESS *__fastcall VidMmCreateProcess(struct DXGPROCESS *a1)
{
  VIDMM_PROCESS *Pool2; // rax
  VIDMM_PROCESS *v3; // rax
  VIDMM_PROCESS *v4; // rdi
  VIDMM_PROCESS *v5; // rbx
  unsigned int v6; // edx

  Pool2 = (VIDMM_PROCESS *)ExAllocatePool2(256LL, 304LL, 959474006LL);
  if ( !Pool2 )
    return 0LL;
  v3 = VIDMM_PROCESS::VIDMM_PROCESS(Pool2);
  v4 = v3;
  v5 = v3;
  if ( v3 && (int)VIDMM_PROCESS::Init(v3, a1) < 0 )
  {
    VIDMM_PROCESS::`scalar deleting destructor'(v4, v6);
    return 0LL;
  }
  return v5;
}
