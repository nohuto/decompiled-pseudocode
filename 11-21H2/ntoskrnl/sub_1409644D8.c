/*
 * XREFs of sub_1409644D8 @ 0x1409644D8
 * Callers:
 *     sub_140964230 @ 0x140964230 (sub_140964230.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_1405FDEC0 @ 0x1405FDEC0 (sub_1405FDEC0.c)
 *     sub_140964650 @ 0x140964650 (sub_140964650.c)
 *     sub_140A89EA8 @ 0x140A89EA8 (sub_140A89EA8.c)
 */

__int64 __fastcall sub_1409644D8(__int64 a1, __int64 a2)
{
  PVOID v4; // r13
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // rbp
  ULONG v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0;
  if ( a1 && a2 )
  {
    v4 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &v11);
    if ( !v4 )
      return 3221225473LL;
    v6 = *(_QWORD *)(a2 + 48);
    if ( v6 )
    {
      LODWORD(v7) = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)v6 == 4 )
          return 0LL;
        if ( *(_DWORD *)v6 <= 2u )
          break;
LABEL_24:
        v7 = (unsigned int)(v7 + 1);
        v6 = *(_QWORD *)(a2 + 48) + 24 * v7;
        if ( !v6 )
          return 0LL;
      }
      v8 = *(_QWORD *)(v6 + 16);
      if ( v8 )
      {
        v9 = 0;
        while ( 1 )
        {
          if ( *(_DWORD *)v8 == 2 )
            goto LABEL_24;
          if ( !*(_QWORD *)(v8 + 16) || !*(_QWORD *)(v8 + 24) || *(_DWORD *)v8 )
            return 3221225485LL;
          result = sub_140964650(v4, v11);
          if ( (_DWORD)result == -1073741275 )
          {
            if ( !(unsigned int)sub_1402DA4B0() )
              goto LABEL_23;
            if ( !(unsigned int)sub_1405FDEC0(a1) )
              goto LABEL_23;
            v10 = sub_140A89EA8(*(_QWORD *)(v8 + 8));
            if ( !v10 )
              goto LABEL_23;
            result = sub_140964650(v4, v11);
            if ( (int)result < 0 )
              goto LABEL_22;
            *(_QWORD *)(v8 + 24) = v10;
          }
          if ( (int)result < 0 )
          {
LABEL_22:
            if ( (_DWORD)result != -1073741275 )
              return result;
          }
LABEL_23:
          v8 = *(_QWORD *)(v6 + 16) + 32LL * (unsigned int)++v9;
          if ( !v8 )
            goto LABEL_24;
        }
      }
    }
  }
  return 3221225485LL;
}
