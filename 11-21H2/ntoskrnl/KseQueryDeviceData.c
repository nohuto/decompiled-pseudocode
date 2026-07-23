/*
 * XREFs of KseQueryDeviceData @ 0x1407EC640
 * Callers:
 *     KseQueryDeviceFlags @ 0x1407EC520 (KseQueryDeviceFlags.c)
 *     sub_1409F6464 @ 0x1409F6464 (sub_1409F6464.c)
 * Callees:
 *     sub_140368A88 @ 0x140368A88 (sub_140368A88.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_1407EC7CC @ 0x1407EC7CC (sub_1407EC7CC.c)
 *     sub_1407ED310 @ 0x1407ED310 (sub_1407ED310.c)
 *     sub_1407ED450 @ 0x1407ED450 (sub_1407ED450.c)
 *     sub_140856C0C @ 0x140856C0C (sub_140856C0C.c)
 *     sub_14085E788 @ 0x14085E788 (sub_14085E788.c)
 *     sub_1409635EC @ 0x1409635EC (sub_1409635EC.c)
 *     sub_140965070 @ 0x140965070 (sub_140965070.c)
 */

__int64 __fastcall KseQueryDeviceData(PCWSTR SourceString, __int64 a2, _DWORD *a3, _DWORD *a4, void *a5)
{
  int v6; // edi
  int v9; // ebx
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14; // [rsp+20h] [rbp-38h]
  int v15[10]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v15 = 0LL;
  v6 = (int)a3;
  if ( dword_140C54EF4 != 2 || (dword_140C54EF0 & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  if ( (*a3 & 0x20000000) != 0 )
  {
    *a3 = 0;
  }
  else
  {
    *a3 = 0;
    HIDWORD(v14) = HIDWORD(a5);
    v9 = sub_1407ED310(SourceString);
    if ( v9 != -1073741275 )
      goto LABEL_14;
  }
  if ( (unsigned int)sub_140368A88() )
  {
    sub_1409635EC();
  }
  else
  {
    v9 = sub_1407EC7CC(SourceString, a2, v6, (int)a4, a5);
    if ( v9 != -1073741275 )
      goto LABEL_14;
  }
  v9 = sub_1407ED450(SourceString, v15);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = v6;
  v12 = *(_QWORD *)v15;
  v9 = sub_140856C0C(v15[0], a2, v11, (int)a4, a5);
  if ( (int)sub_14085E788(SourceString) < 0 )
    sub_140965070(v12);
LABEL_14:
  if ( v9 >= 0 )
  {
    if ( !*a4 )
      v9 = -1073741275;
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F;
    HIDWORD(qword_140C2A440[v13]) = 0;
    LODWORD(qword_140C2A440[v13]) = 592101;
    if ( (dword_140D04880 & 1) != 0 )
    {
      LODWORD(v14) = v9;
      sub_14057D738(0LL, "KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v14);
    }
    sub_1403C09C8(0);
  }
  return (unsigned int)v9;
}
