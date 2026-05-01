/*
 * XREFs of ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001D7C0
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003AD8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800292C8 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C484 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180087514 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x18001AC10 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?RmpActivityHostComputeDigestForCategory@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18002948C (-RmpActivityHostComputeDigestForCategory@@YA-AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_R.c)
 */

void __fastcall RmpActivityHostUpdateDigests(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  __int16 v4; // r11
  struct _RM_ACTIVITY_HOST *v5; // r10
  __int16 v6; // r9
  char *v7; // r10
  __int64 v8; // rdi
  __int64 v9; // rbp
  char v10; // r8
  unsigned __int64 v11; // rcx
  __int16 v12; // ax
  __int16 v13; // cx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int16 v18; // r9
  unsigned __int64 v19; // rdx

  if ( (a2 & 1) != 0 )
    *((_WORD *)a1 + 588) = RmpActivityHostComputeDigestForCategory(a1, 0LL);
  if ( (a2 & 2) != 0 )
  {
    v4 = *((_WORD *)a1 + 589);
    v5 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 144);
    v6 = 102;
    if ( v5 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1152) )
    {
      v7 = (char *)v5 - 1296;
      if ( v7 )
      {
        v8 = 0x11000002000LL;
        v9 = 0x8800001000LL;
        while ( 1 )
        {
          if ( *((_DWORD *)v7 + 320) != 2 && (v7[1332] & 4) == 0 )
            goto LABEL_16;
          v10 = v7[1378];
          if ( (v10 & 8) != 0 )
            break;
          v11 = *((int *)v7 + 334);
          if ( (unsigned int)v11 <= 0x27 )
          {
            if ( _bittest64(&v9, v11) )
              break;
          }
          v12 = *((_WORD *)v7 + 688);
          if ( (v12 & 0x10) != 0 || (unsigned int)v11 <= 0x28 && _bittest64(&v8, v11) )
          {
            v13 = 4;
            goto LABEL_25;
          }
          v13 = 1;
LABEL_14:
          v13 |= 8u;
LABEL_15:
          v6 = RmpPolicyDigestMerge(
                 v6,
                 v13 | (8 * (v12 & 8 | (2 * (v12 & 3 | (8 * ((*((_DWORD *)v7 + 333) >> 3) & 1 | 2)))))));
LABEL_16:
          v14 = *((_QWORD *)v7 + 162);
          v15 = 3 * (*((int *)v7 + 332) + 47LL);
          v16 = *((_QWORD *)v7 + 165);
          v7 = 0LL;
          if ( v14 != v16 + 8 * v15 )
            v7 = (char *)(v14 - 1296);
          if ( !v7 )
            goto LABEL_19;
        }
        v12 = *((_WORD *)v7 + 688);
        v13 = 2;
LABEL_25:
        if ( (v12 & 0x10) != 0 || (v19 = *((int *)v7 + 334), (unsigned int)v19 <= 0x28) && _bittest64(&v8, v19) )
        {
          if ( (v10 & 0x40) == 0 )
            goto LABEL_15;
        }
        goto LABEL_14;
      }
    }
LABEL_19:
    *((_WORD *)a1 + 589) = v6;
    v17 = *((_QWORD *)a1 + 7);
    v18 = v6 & 0x80;
    if ( (v4 & 0x80) != 0 )
    {
      if ( !v18 )
        --*(_DWORD *)(v17 + 212);
    }
    else if ( v18 )
    {
      ++*(_DWORD *)(v17 + 212);
    }
  }
}
