/*
 * XREFs of sub_140AFA5EC @ 0x140AFA5EC
 * Callers:
 *     sub_140AFA274 @ 0x140AFA274 (sub_140AFA274.c)
 *     sub_140AFA320 @ 0x140AFA320 (sub_140AFA320.c)
 * Callees:
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_14090AFC8 @ 0x14090AFC8 (sub_14090AFC8.c)
 *     sub_140B4D5C8 @ 0x140B4D5C8 (sub_140B4D5C8.c)
 */

void sub_140AFA5EC()
{
  unsigned __int16 v0; // r14
  unsigned __int16 *v1; // rbx
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rdi
  unsigned int v4; // ebp
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int16 i; // si
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // r15
  unsigned __int16 *v19; // r12
  __int16 v20; // si
  unsigned int v21; // edi
  __int64 v22; // rbx
  __int64 v23; // r10
  char v24; // cl
  char v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int16 v26; // [rsp+78h] [rbp+10h]
  unsigned __int64 v27; // [rsp+80h] [rbp+18h]
  unsigned __int64 v28; // [rsp+88h] [rbp+20h]

  v27 = 0LL;
  v25 = 0;
  v28 = 0LL;
  if ( dword_140C4A0D8 )
  {
    if ( *(_BYTE *)(qword_140C4E850 + 8) == 1 )
    {
      v0 = *(_WORD *)(qword_140C4E850 + 40);
      v1 = (unsigned __int16 *)(qword_140C4E850 + 44);
      v2 = -1LL;
      v3 = qword_140C4E850 + *(unsigned int *)(qword_140C4E850 + 4);
      v26 = v0;
      v4 = 0;
      v5 = 0LL;
      v6 = 0LL;
      for ( i = 0; i < v0; v1 = (unsigned __int16 *)((char *)v1 + *((unsigned int *)v1 + 1)) )
      {
        if ( (*(_BYTE *)v1 & 1) != 0 )
        {
          if ( (*(_BYTE *)v1 & 4) != 0 )
            goto LABEL_45;
          v8 = *((unsigned int *)v1 + 6);
          if ( (_DWORD)v8 )
          {
            if ( (unsigned __int64)&v1[v8 + 16] > v3 )
              goto LABEL_45;
            qsort(v1 + 16, (unsigned int)v8, 2uLL, (int (__cdecl *)(const void *, const void *))sub_14052A6D0);
            v27 = *((_QWORD *)v1 + 1);
            v9 = v27 >> 12;
            v10 = v27 >> 12;
            if ( v27 >> 12 >= v2 )
              v10 = v2;
            v2 = v10;
            v28 = *((_QWORD *)v1 + 2);
            v11 = v9 + (v28 >> 12) - 1;
            v12 = v11;
            if ( v11 <= v5 )
              v12 = v5;
            v6 += v28 >> 12;
            v13 = 0;
            v5 = v12;
            v14 = 0;
            if ( Base )
            {
              if ( v9 >= *(_QWORD *)Base && v9 >= *((_QWORD *)Base + 2) )
              {
                v15 = 1;
                do
                {
                  ++v15;
                  ++v14;
                }
                while ( v9 >= *((_QWORD *)Base + 2 * v15) );
                v0 = v26;
                v13 = 0;
              }
              v14 = *((_DWORD *)Base + 4 * v14 + 2);
              if ( v11 >= *(_QWORD *)Base && v11 >= *((_QWORD *)Base + 2) )
              {
                v16 = 1;
                do
                {
                  ++v16;
                  ++v13;
                }
                while ( v11 >= *((_QWORD *)Base + 2 * v16) );
                v0 = v26;
              }
              if ( *((_DWORD *)Base + 4 * v13 + 2) != v14 )
                goto LABEL_45;
            }
            v17 = 2LL * v4;
            *((_QWORD *)qword_140C4A0D0 + v17) = v1;
            *((_WORD *)qword_140C4A0D0 + 4 * v17 + 4) = v1[1];
            ++v4;
            *((_WORD *)qword_140C4A0D0 + 4 * v17 + 5) = v14;
          }
        }
        ++i;
      }
      if ( (!Base || v2 == qword_140C0CAA8 && v5 == qword_140C4ACB8 && v6 == qword_140C4ACE8)
        && (unsigned __int64)(v1 + 1) <= v3 )
      {
        v18 = *v1;
        v19 = v1 + 2;
        if ( (unsigned __int64)&v1[14 * v18 + 2] <= v3 )
        {
          qsort(qword_140C4A0D0, v4, 0x10uLL, sub_140B4D570);
          if ( (unsigned int)sub_14090AFC8() )
          {
            qsort(qword_140C4A0D0, v4, 0x10uLL, sub_140B4D540);
            v20 = 0;
            v21 = 0;
            if ( !v4 )
            {
LABEL_44:
              qsort(qword_140C4A0D0, v4, 0x10uLL, sub_140B4D520);
              *((_QWORD *)qword_140C4A0D0 + 2 * v21) = -1LL;
              *(_QWORD *)qword_140C4A0D0 = 0LL;
              return;
            }
            v22 = 0LL;
            while ( 1 )
            {
              v23 = *(_QWORD *)((char *)qword_140C4A0D0 + v22);
              v27 = *(_QWORD *)(v23 + 8);
              *(_QWORD *)((char *)qword_140C4A0D0 + v22) = v27 >> 12;
              if ( v21 && *(_WORD *)((char *)qword_140C4A0D0 + v22 + 10) == *((_WORD *)qword_140C4A0D0 + 8 * v21 - 3) )
              {
                if ( *(_WORD *)((char *)qword_140C4A0D0 + v22 + 8) != *((_WORD *)qword_140C4A0D0 + 8 * v21 - 4) )
                  ++v20;
              }
              else
              {
                v20 = 0;
              }
              *(_WORD *)((char *)qword_140C4A0D0 + v22 + 12) = v20;
              if ( (unsigned int)sub_140B4D5C8(v23, &v25, (unsigned __int16)v18, v19) != 1 )
                break;
              v24 = v25;
              if ( v25 )
              {
                *((_BYTE *)qword_140C4A0D0 + v22 + 14) = 1;
                *((_BYTE *)qword_140C4A0D0 + v22 + 15) = v24;
              }
              ++v21;
              v22 += 16LL;
              if ( v21 >= v4 )
                goto LABEL_44;
            }
          }
        }
      }
    }
LABEL_45:
    dword_140C4A0D8 = 0;
    qword_140C4A0D0 = 0LL;
  }
}
