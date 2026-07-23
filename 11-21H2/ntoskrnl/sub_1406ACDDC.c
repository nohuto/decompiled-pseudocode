/*
 * XREFs of sub_1406ACDDC @ 0x1406ACDDC
 * Callers:
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 *     sub_14082CB7C @ 0x14082CB7C (sub_14082CB7C.c)
 * Callees:
 *     sub_140235054 @ 0x140235054 (sub_140235054.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14029C6C4 @ 0x14029C6C4 (sub_14029C6C4.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1402E1260 @ 0x1402E1260 (sub_1402E1260.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14070705C @ 0x14070705C (sub_14070705C.c)
 */

__int64 __fastcall sub_1406ACDDC(char *a1, unsigned int a2, int a3, _DWORD *a4, char a5, unsigned int *a6)
{
  char *v9; // r14
  PVOID v10; // rax
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // esi
  unsigned int *v15; // r15
  __int64 v16; // r13
  _QWORD **v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rax
  unsigned int v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+24h] [rbp-54h] BYREF
  ULONG v23; // [rsp+28h] [rbp-50h] BYREF
  unsigned int *v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  char v28; // [rsp+A0h] [rbp+28h]

  v9 = a1;
  v24 = 0LL;
  v21 = 0;
  v22 = 0;
  v28 = 0;
  v10 = RtlImageDirectoryEntryToData(a1, 1u, 0xCu, &v23);
  if ( v10 )
  {
    v12 = (_DWORD)v10 - (_DWORD)v9;
    *a6 = v12;
    if ( v12 > a2 )
    {
LABEL_6:
      v11 = -1073741701;
      goto LABEL_30;
    }
  }
  else
  {
    *a6 = 0;
  }
  if ( *a4 != 1 )
  {
    v11 = -1073741637;
LABEL_30:
    sub_14070705C(a6);
    return (unsigned int)v11;
  }
  v13 = a4[1] + a3 + 8;
  v14 = a3 + 8;
  while ( v14 < v13 )
  {
    if ( (unsigned __int64)v14 + 12 > v13 )
      goto LABEL_6;
    v15 = (unsigned int *)&v9[v14];
    v24 = v15;
    v25 = *(_QWORD *)v15;
    v16 = v15[2];
    if ( (int)sub_1402E1260(v14, 12, (int *)&v21) < 0 )
      goto LABEL_6;
    if ( (int)sub_1402E1260(v21, v16, (int *)&v21) < 0 )
      goto LABEL_6;
    v14 = v21;
    if ( v21 > v13 )
      goto LABEL_6;
    v17 = 0LL;
    if ( v25 == 3 )
    {
      v17 = (_QWORD **)(a6 + 2);
    }
    else if ( v25 == 4 )
    {
      if ( sub_14029C6C4() )
        v17 = (_QWORD **)(a6 + 4);
    }
    else if ( v25 == 5 && sub_14029C6C4() )
    {
      v17 = (_QWORD **)(a6 + 6);
    }
    if ( v17 )
    {
      v28 = 1;
      if ( *v17 )
        goto LABEL_6;
      v18 = sub_1402828F0(256, v16 + 12, 0x7252694Du);
      *v17 = v18;
      if ( !v18 )
      {
        v11 = -1073741670;
        goto LABEL_30;
      }
      memmove(v18, v15, v16 + 12);
      v19 = (__int64)*v17;
      *(_QWORD *)v19 = v25;
      *(_DWORD *)(v19 + 8) = v16;
      v11 = sub_140235054(*v17, a2, &v22);
      if ( v11 < 0 )
        goto LABEL_30;
      a6[1] += v22;
      v9 = a1;
    }
  }
  if ( !v28 )
  {
    v11 = -1073741637;
    goto LABEL_30;
  }
  return 0;
}
