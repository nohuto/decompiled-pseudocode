/*
 * XREFs of sub_140AF8F6C @ 0x140AF8F6C
 * Callers:
 *     sub_140AF8ED0 @ 0x140AF8ED0 (sub_140AF8ED0.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_140AF9048 @ 0x140AF9048 (sub_140AF9048.c)
 *     sub_140AF917C @ 0x140AF917C (sub_140AF917C.c)
 */

__int64 __fastcall sub_140AF8F6C(__int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  SIZE_T v5; // rbp
  char *v7; // r15
  int v8; // ebx
  unsigned int i; // edi
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rax

  v5 = a2;
  v7 = (char *)MmMapIoSpaceEx(a1, a2, 0x204u);
  if ( v7 )
  {
    v8 = 0;
    for ( i = 0; i < (unsigned int)v5; i += 16 )
    {
      if ( *(_QWORD *)&v7[i] == 0x2052545020445352LL )
      {
        v11 = (_DWORD *)*a4;
        if ( *(_DWORD *)*a4 < (unsigned int)(*(_DWORD *)(*a4 + 4) + 1) )
        {
          v8 = sub_140AF917C(a4);
          if ( v8 < 0 )
            break;
          v11 = (_DWORD *)*a4;
        }
        v8 = sub_140AF9048(&v7[i], &v11[8 * v11[1] + 2]);
        if ( v8 >= 0 )
        {
          v13 = *(_DWORD *)(v12 + 12) & 0xFFFFFFF7;
          if ( a3 )
            v13 = *(_DWORD *)(v12 + 12) | 8;
          v14 = *a4;
          *(_DWORD *)(v12 + 12) = v13;
          ++*(_DWORD *)(v14 + 4);
        }
      }
    }
    MmUnmapVideoDisplay(v7, v5);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
