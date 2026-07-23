/*
 * XREFs of sub_140764970 @ 0x140764970
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     sub_140563B98 @ 0x140563B98 (sub_140563B98.c)
 *     sub_140563CAC @ 0x140563CAC (sub_140563CAC.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140764970(const wchar_t *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  PVOID v8; // rdi
  signed int v9; // ebx
  _WORD *v10; // rax
  _QWORD *inserted; // rax
  __int64 *v12; // rdx
  char *v13; // rax
  _OWORD Buffer[2]; // [rsp+40h] [rbp-20h] BYREF
  BOOLEAN NewElement; // [rsp+A0h] [rbp+40h] BYREF
  PVOID P; // [rsp+A8h] [rbp+48h] BYREF

  P = 0LL;
  NewElement = 0;
  memset(Buffer, 0, sizeof(Buffer));
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_140563B98(
      (__int64)a1,
      (const EVENT_DESCRIPTOR *)qword_14003B3F0,
      a3,
      *(const wchar_t **)(a2 + 8),
      *(const wchar_t **)(a2 + 16),
      a1);
  v5 = sub_14077DE70(a1, 200LL, 1466986064LL, &P);
  v8 = P;
  v9 = v5;
  if ( v5 >= 0 )
  {
    v9 = 0;
    if ( P )
    {
      v6 = 0x7FFFLL;
      v10 = P;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v6;
      }
      while ( v6 );
      v9 = v6 == 0 ? 0xC000000D : 0;
      if ( v6 )
      {
        LOWORD(v6) = 2 * v6;
        *((_QWORD *)&Buffer[0] + 1) = P;
        LOWORD(Buffer[0]) = -2 - v6;
        WORD1(Buffer[0]) = -(__int16)v6;
      }
    }
    if ( v9 >= 0 )
    {
      inserted = RtlInsertElementGenericTableAvl(&stru_140C44720, Buffer, 0x20u, &NewElement);
      if ( inserted )
      {
        if ( NewElement )
        {
          P = 0LL;
          inserted[3] = inserted + 2;
          inserted[2] = inserted + 2;
        }
        *(_QWORD *)(a2 + 112) = inserted;
        v6 = a2 + 96;
        v12 = (__int64 *)inserted[3];
        v13 = (char *)(inserted + 2);
        if ( (char *)*v12 != v13 )
          __fastfail(3u);
        *(_QWORD *)v6 = v13;
        *(_QWORD *)(a2 + 104) = v12;
        *v12 = v6;
        *((_QWORD *)v13 + 1) = v6;
        _InterlockedIncrement((volatile signed __int32 *)a2);
        v8 = P;
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x57706E50u);
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_140563CAC(
      v6,
      (const EVENT_DESCRIPTOR *)qword_14003B500,
      v7,
      *(const wchar_t **)(a2 + 8),
      *(const wchar_t **)(a2 + 16),
      a1,
      v9);
  return (unsigned int)v9;
}
