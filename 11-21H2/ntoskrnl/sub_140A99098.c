/*
 * XREFs of sub_140A99098 @ 0x140A99098
 * Callers:
 *     sub_140A98E28 @ 0x140A98E28 (sub_140A98E28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A99098(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int *v4; // r10
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // r10
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r10

  if ( !qword_140D575C8
    || qword_140D575C8 > a1
    || qword_140D575C8 + (unsigned __int64)(unsigned int)dword_140D575E0 <= a1
    || !*(_BYTE *)(*(_QWORD *)(a2 + 64) + 48LL) )
  {
    LODWORD(v3) = *((_DWORD *)qword_140D57500 + 8216);
    if ( (unsigned int)v3 < 3
      || (((v4 = *(int **)(*((_QWORD *)qword_140D57500 + 4110) + 56LL),
            v5 = **(_DWORD **)(*((_QWORD *)qword_140D57500 + 4109) + 56LL),
            v5 != 5)
        || (v6 = *v4, *v4 != 6))
       && ((v7 = *v4, *v4 != 5) || (v6 = 5, v7 = 5, v5 != 6))
       || (!qword_140D57648
        || qword_140D57648 > a1
        || qword_140D57648 + (unsigned __int64)(unsigned int)dword_140D57674 <= a1)
       && (!qword_140D57640
        || qword_140D57640 > a1
        || qword_140D57640 + (unsigned __int64)(unsigned int)dword_140D57670 <= a1)
       && ((v7 = v6, !qword_140D57638)
        || qword_140D57638 > a1
        || qword_140D57638 + (unsigned __int64)(unsigned int)dword_140D5767C <= a1))
      && (v5 != 1
       || v7 != 1
       || (!qword_140D57650
        || qword_140D57650 > a1
        || qword_140D57650 + (unsigned __int64)(unsigned int)dword_140D57678 <= a1)
       && (!qword_140D57658
        || qword_140D57658 > a1
        || qword_140D57658 + (unsigned __int64)(unsigned int)dword_140D57680 <= a1)) )
    {
      v8 = 1;
      if ( (unsigned int)v3 <= 1 )
        return 1LL;
      while ( 1 )
      {
        v9 = *((_QWORD *)qword_140D57500 + v8 + 4108);
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)qword_140D57500 + v8 + 4109) + 56LL) + 8LL) == *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8LL)
          && (*(_DWORD *)(v9 + 72) & 2) != 0 )
        {
          break;
        }
        if ( ++v8 >= (unsigned int)v3 )
        {
          while ( 1 )
          {
            v3 = (unsigned int)(v3 - 1);
            v10 = (_QWORD *)**((_QWORD **)qword_140D57500 + v3 + 4109);
            if ( v10 )
              break;
LABEL_38:
            if ( (unsigned int)v3 <= 1 )
              return 1LL;
          }
          while ( 1 )
          {
            LODWORD(v11) = v3 - 1;
            if ( (_DWORD)v3 != 1 )
              break;
LABEL_37:
            v10 = (_QWORD *)*v10;
            if ( !v10 )
              goto LABEL_38;
          }
          while ( 1 )
          {
            v11 = (unsigned int)(v11 - 1);
            v12 = (_QWORD *)**((_QWORD **)qword_140D57500 + v11 + 4109);
            if ( v12 )
              break;
LABEL_36:
            if ( !(_DWORD)v11 )
              goto LABEL_37;
          }
          while ( *(_QWORD *)(v12[7] + 8LL) != *(_QWORD *)(v10[7] + 8LL) )
          {
            v12 = (_QWORD *)*v12;
            if ( !v12 )
              goto LABEL_36;
          }
          ++*((_DWORD *)qword_140D57500 + 8207);
          return 0LL;
        }
      }
    }
  }
  return 0LL;
}
