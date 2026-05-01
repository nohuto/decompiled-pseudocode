/*
 * XREFs of ?HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007DC3C
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008221C (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180081854 (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall HampPdcCleanup(struct _HAM_PDC_CONTEXT *a1)
{
  unsigned __int64 v1; // rbx
  bool v3; // zf
  unsigned __int64 v4; // rcx
  int v5; // ebp
  struct _RTL_BALANCED_NODE *v6; // rdx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v1 = (unsigned __int64)a1 + 48;
  v3 = (*((_BYTE *)a1 + 56) & 1) == 0;
  v4 = *((_QWORD *)a1 + 6);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v6 = (struct _RTL_BALANCED_NODE *)v4;
          if ( v5 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          v6->Children[0] = 0LL;
        }
        v7 = (unsigned __int64 *)(v4 + 8);
        if ( !*(_QWORD *)(v4 + 8) )
          break;
        if ( v5 )
          v4 ^= *v7;
        else
          v4 = *v7;
        *v7 = 0LL;
      }
      v8 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v8 )
        v8 ^= v4;
      HampSlsBlockerTreeDeleteCallback((struct _RTL_BALANCED_NODE *)v4, (char *)a1 + 32);
      if ( !v8 )
        break;
      v4 = v8;
    }
  }
  v9 = *(_BYTE *)(v1 + 8);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v9 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  if ( *((_QWORD *)a1 + 3) )
    Pdcv2ActivationClientUnregister();
  v10 = *((_QWORD *)a1 + 10);
  if ( v10 )
    TpReleaseWork(v10);
  v11 = *((_QWORD *)a1 + 11);
  if ( v11 )
    TpReleaseWork(v11);
  v12 = *((_QWORD *)a1 + 9);
  if ( v12 )
    TpReleaseWork(v12);
}
