/*
 * XREFs of ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C00A10FC
 * Callers:
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C00A101C (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A3F98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        struct _VIDMM_POOL_BLOCK **a3,
        struct _VIDMM_POOL_BLOCK **a4)
{
  VIDMM_LINEAR_POOL *v4; // rax
  VIDMM_LINEAR_POOL *v6; // rdi
  VIDMM_LINEAR_POOL *v7; // r8
  struct _VIDMM_POOL_BLOCK *v8; // rdx
  char v9; // bl
  _QWORD *v10; // r11
  char v11; // dl
  VIDMM_LINEAR_POOL *v12; // rdx
  struct _VIDMM_POOL_BLOCK *v13; // r8
  __int64 v14; // rdx
  struct _VIDMM_POOL_BLOCK *v15; // r8
  bool v16; // zf
  struct _VIDMM_POOL_BLOCK *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx

  v4 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 5);
  v6 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 6);
  v7 = (VIDMM_LINEAR_POOL *)((char *)this + 72);
  if ( v4 != (VIDMM_LINEAR_POOL *)((char *)this + 72) )
  {
    while ( v6 != v7 )
    {
      v8 = (VIDMM_LINEAR_POOL *)((char *)v4 - 40);
      v4 = *(VIDMM_LINEAR_POOL **)v4;
      v9 = *((_BYTE *)v8 + 56);
      v10 = (_QWORD *)((char *)v6 - 40);
      v6 = (VIDMM_LINEAR_POOL *)*((_QWORD *)v6 + 1);
      if ( v9 != 3 && (unsigned __int8)(v9 - 5) > 2u )
      {
        *a4 = v8;
        v14 = *((_QWORD *)v8 + 4);
        v15 = 0LL;
        v16 = v14 == (_QWORD)this + 40;
        v17 = (struct _VIDMM_POOL_BLOCK *)(v14 - 24);
        goto LABEL_11;
      }
      v11 = *((_BYTE *)v10 + 56);
      if ( v11 != 3 && (unsigned __int8)(v11 - 5) > 2u )
      {
        v12 = (VIDMM_LINEAR_POOL *)v10[3];
        v13 = 0LL;
        *a3 = (struct _VIDMM_POOL_BLOCK *)v10;
        if ( v12 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
          v13 = (VIDMM_LINEAR_POOL *)((char *)v12 - 24);
        goto LABEL_8;
      }
      if ( v4 == v7 )
      {
        v19 = (_QWORD *)((char *)this + 40);
        goto LABEL_19;
      }
    }
  }
  v19 = (_QWORD *)((char *)this + 40);
  if ( v4 == v7 )
  {
LABEL_19:
    v20 = (_QWORD *)*((_QWORD *)this + 6);
    v15 = 0LL;
    *a4 = 0LL;
    v16 = v20 == v19;
    v17 = (struct _VIDMM_POOL_BLOCK *)(v20 - 3);
LABEL_11:
    if ( !v16 )
      v15 = v17;
    *a3 = v15;
  }
  else
  {
    v18 = (_QWORD *)*v19;
    v13 = 0LL;
    *a3 = 0LL;
    if ( v18 == v19 )
LABEL_8:
      *a4 = v13;
    else
      *a4 = (struct _VIDMM_POOL_BLOCK *)(v18 - 3);
  }
}
