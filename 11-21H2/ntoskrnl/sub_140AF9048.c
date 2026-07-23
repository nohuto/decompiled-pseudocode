/*
 * XREFs of sub_140AF9048 @ 0x140AF9048
 * Callers:
 *     sub_140AF8F6C @ 0x140AF8F6C (sub_140AF8F6C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AF9048(__int64 a1, __int64 a2)
{
  int v3; // r11d
  unsigned int v4; // ecx
  unsigned int v5; // r10d
  unsigned int v6; // eax
  __int64 v7; // r9
  char *v8; // rbx
  char v9; // cl
  char v10; // al
  int v11; // ecx
  __int64 v12; // rax
  int v13; // eax

  v3 = 0;
  v4 = -1072431079;
  while ( 1 )
  {
    v5 = v3 == 0 ? 2 : 0;
    v6 = v5;
    if ( *(unsigned __int8 *)(a1 + 15) < v5 )
      v6 = *(unsigned __int8 *)(a1 + 15);
    if ( v6 < 2 )
    {
      v7 = 20LL;
      goto LABEL_7;
    }
    v7 = *(unsigned int *)(a1 + 20);
    if ( (unsigned int)(v7 - 33) <= 0x63 )
      break;
LABEL_20:
    if ( (unsigned int)++v3 >= 2 )
      return v4;
  }
  if ( !(_DWORD)v7 )
    goto LABEL_10;
LABEL_7:
  v8 = (char *)a1;
  v9 = 0;
  do
  {
    v10 = *v8++;
    v9 += v10;
    --v7;
  }
  while ( v7 );
  if ( v9 )
  {
    v4 = -1073741823;
    goto LABEL_20;
  }
LABEL_10:
  v11 = *(_DWORD *)(a2 + 12) | 2;
  *(_DWORD *)(a2 + 12) = v11;
  if ( *(unsigned __int8 *)(a1 + 15) < v5 )
    v5 = *(unsigned __int8 *)(a1 + 15);
  if ( v5 >= 2 && (v12 = *(_QWORD *)(a1 + 24)) != 0 )
  {
    *(_QWORD *)a2 = v12;
    *(_DWORD *)(a2 + 12) = v11 | 4;
    v13 = 0;
  }
  else
  {
    *(_QWORD *)a2 = *(unsigned int *)(a1 + 16);
    v13 = *(_DWORD *)(a1 + 20);
  }
  *(_DWORD *)(a2 + 8) = v13;
  return 0;
}
