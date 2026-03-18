/*
 * XREFs of ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C
 * Callers:
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C00233C0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0024B20 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bSet(RGNOBJ *this, unsigned int a2, struct _RECTL *a3)
{
  __int64 v3; // rdi
  struct REGION *Region; // rax
  struct REGION *v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rax
  struct _RECTL *v10; // rax
  struct REGION *v11; // rax
  struct REGION *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v15; // r14d
  int right; // ecx
  LONG top; // edx
  LONG bottom; // r8d
  unsigned int v20; // r14d
  unsigned int v21; // edi
  struct REGION *v22; // [rsp+20h] [rbp-30h] BYREF
  int v23; // [rsp+28h] [rbp-28h]
  struct _RECTL *v24; // [rsp+30h] [rbp-20h] BYREF
  int v25; // [rsp+38h] [rbp-18h]
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  int v27; // [rsp+48h] [rbp-8h]

  v3 = a2;
  v25 = 0;
  Region = RGNMEMOBJ::AllocateRegion(0x70u);
  v24 = (struct _RECTL *)Region;
  v7 = Region;
  v8 = 1;
  if ( Region )
  {
    *((_DWORD *)Region + 20) = 16;
    *((_DWORD *)Region + 21) = 1;
    *((_QWORD *)Region + 12) = 0LL;
    *((_QWORD *)Region + 13) = 0LL;
    v9 = *((_QWORD *)Region + 11);
    *(_DWORD *)v9 = 0;
    *(_DWORD *)(v9 + 4) = 0x80000000;
    *(_QWORD *)(v9 + 8) = 0x7FFFFFFFLL;
    *((_QWORD *)v7 + 5) = v9 + 16;
    v24[1].right = 112;
    v24[2].left = 0;
    v24[1].bottom = 0;
    v24[2].top = 0;
    v10 = v24 + 3;
    *(_QWORD *)&v24[3].right = v24 + 3;
    *(_QWORD *)&v10->left = v10;
  }
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v24);
  v23 = 0;
  v11 = RGNMEMOBJ::AllocateRegion(0x70u);
  v22 = v11;
  v12 = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 20) = 16;
    *((_DWORD *)v11 + 21) = 1;
    *((_QWORD *)v11 + 12) = 0LL;
    *((_QWORD *)v11 + 13) = 0LL;
    v13 = *((_QWORD *)v11 + 11);
    *(_DWORD *)v13 = 0;
    *(_DWORD *)(v13 + 4) = 0x80000000;
    *(_QWORD *)(v13 + 8) = 0x7FFFFFFFLL;
    *((_QWORD *)v12 + 5) = v13 + 16;
    *((_DWORD *)v22 + 6) = 112;
    *((_DWORD *)v22 + 8) = 0;
    *((_DWORD *)v22 + 7) = 0;
    *((_DWORD *)v22 + 9) = 0;
    v14 = (_QWORD *)((char *)v22 + 48);
    *((_QWORD *)v22 + 7) = (char *)v22 + 48;
    *v14 = v14;
  }
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v22);
  if ( !v24 || !v22 )
    goto LABEL_25;
  if ( (unsigned int)v3 >= 0x14 )
  {
    v27 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v26, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v26);
    v20 = (unsigned int)v3 >> 1;
    v21 = v3 - ((unsigned int)v3 >> 1);
    if ( v26
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v24, v20, a3)
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v22, v21, &a3[v20]) )
    {
      RGNOBJ::iCombine((RGNOBJ *)&v26, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v24, 2);
      RGNOBJ::vSwap(this, (struct RGNOBJ *)&v26);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v26);
      goto LABEL_18;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v26);
LABEL_25:
    v8 = 0;
    goto LABEL_18;
  }
  v15 = 0;
  if ( (_DWORD)v3 )
  {
    do
    {
      right = a3->right;
      if ( a3->left < right )
      {
        top = a3->top;
        bottom = a3->bottom;
        if ( top < bottom && a3->left >= -134217728 && right <= 0x7FFFFFF && top >= -134217728 && bottom <= 0x7FFFFFF )
        {
          if ( v15 )
          {
            RGNOBJ::vSet(&v24, a3);
            RGNOBJ::iCombine((RGNOBJ *)&v22, this, (struct RGNOBJ *)&v24, 2);
            RGNOBJ::vSwap(this, (struct RGNOBJ *)&v22);
          }
          else
          {
            RGNOBJ::vSet((struct _RECTL **)this, a3);
            v15 = 1;
          }
        }
      }
      ++a3;
      --v3;
    }
    while ( v3 );
  }
LABEL_18:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v22);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v24);
  return v8;
}
