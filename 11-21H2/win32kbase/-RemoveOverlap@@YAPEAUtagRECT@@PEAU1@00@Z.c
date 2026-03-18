/*
 * XREFs of ?RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1C0210A24
 * Callers:
 *     ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x1C0210C18 (-RemoveOverlaps@@YAXPEAUtagRECT@@I@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 */

struct tagRECT *__fastcall RemoveOverlap(struct tagRECT *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  LONG right; // r10d
  LONG left; // r11d
  LONG top; // r9d
  LONG bottom; // r8d
  struct tagRECT *v8; // rbx
  int v9; // edi
  int v10; // r12d
  int v11; // esi
  LONG v12; // ecx
  LONG v13; // eax
  LONG v14; // r15d
  LONG v15; // edx
  int v16; // r13d
  LONG v17; // eax
  LONG v18; // r14d
  bool v19; // zf
  LONG v20; // r8d
  int v21; // eax
  int v22; // ebp
  bool v23; // zf
  int v24; // r9d
  int v25; // eax
  int v26; // ebp
  _DWORD *v27; // rcx
  int v28; // r8d
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  struct tagRECT *v33; // rdx
  LONG v34; // eax
  int v35; // ecx
  LONG v36; // r8d
  int v37; // ecx
  int v38; // edx
  LONG v39; // edx
  unsigned __int64 v41; // [rsp+20h] [rbp-58h]
  unsigned __int64 v42; // [rsp+28h] [rbp-50h]
  LONG v45; // [rsp+98h] [rbp+20h]

  right = a1->right;
  left = a1->left;
  top = a1->top;
  bottom = a1->bottom;
  v8 = a1;
  v9 = (right - left) / 2 + left;
  LODWORD(v41) = v9;
  v10 = (bottom - top) / 2 + top;
  HIDWORD(v41) = v10;
  v11 = (a2->right - a2->left) / 2 + a2->left;
  v12 = a2->top;
  v13 = a2->bottom;
  v14 = a3->right;
  LODWORD(v42) = v11;
  v15 = a3->left;
  v45 = a3->left;
  v16 = (v13 - v12) / 2 + v12;
  v17 = a3->top;
  v18 = a3->bottom;
  v19 = v18 == bottom;
  v20 = v17;
  v21 = 0;
  HIDWORD(v42) = v16;
  if ( v14 == right )
    v21 = 2;
  v22 = v21 | v19;
  v23 = v20 == top;
  v24 = 1;
  v25 = 0;
  if ( v15 == left )
    v25 = 2;
  v26 = ((v25 | v23) ^ v22) - 1;
  if ( (v26 & 2) != 0 )
  {
    if ( PtInRect(a3, v41) || PtInRect(v27, v42) )
    {
      v29 = v9 - v11;
      if ( v9 - v11 < 0 )
        v29 = v11 - v9;
      v30 = v10 - v16;
      if ( v10 - v16 < 0 )
        v30 = v16 - v10;
      if ( v29 >= v30 )
        goto LABEL_9;
    }
    else if ( v14 - v45 <= v18 - v28 )
    {
LABEL_9:
      v26 = v24;
      goto LABEL_19;
    }
    v26 = 0;
  }
  else if ( v26 == 1 )
  {
    goto LABEL_19;
  }
  v9 = v10;
  v11 = v16;
LABEL_19:
  if ( v9 >= 0 )
  {
    v31 = 0;
  }
  else
  {
    v31 = v24;
    v9 = -v9;
  }
  if ( v11 >= 0 )
  {
    v32 = 0;
  }
  else
  {
    v32 = v24;
    v11 = -v11;
  }
  v33 = a2;
  if ( v11 < v9 )
  {
    v32 = v31;
  }
  else
  {
    v33 = v8;
    v8 = a2;
  }
  if ( v26 == v24 )
  {
    v19 = v32 == 0;
    v34 = v8->left;
    if ( v19 )
      v35 = v33->right;
    else
      v35 = v33->left + v34 - v8->right;
    v36 = v8->top;
    v37 = v35 - v34;
    v38 = 0;
  }
  else
  {
    v36 = v8->top;
    if ( v32 )
      v39 = v36 + v33->top - v8->bottom;
    else
      v39 = v33->bottom;
    v34 = v8->left;
    v38 = v39 - v36;
    v37 = 0;
  }
  v8->right += v37;
  v8->bottom += v38;
  v8->left = v37 + v34;
  v8->top = v36 + v38;
  return v8;
}
