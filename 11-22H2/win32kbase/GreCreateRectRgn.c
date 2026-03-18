/*
 * XREFs of GreCreateRectRgn @ 0x1C008A630
 * Callers:
 *     EngCreateRectRgn @ 0x1C008A250 (EngCreateRectRgn.c)
 *     InitializeGre @ 0x1C02DB800 (InitializeGre.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C003F2C0 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0047860 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C008A720 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C008AA5C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0150A68 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  struct OBJECT *v7; // rbx
  struct HOBJ__ *v8; // rsi
  PVOID Entry; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v12; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-28h] BYREF

  v12.left = a1;
  v12.top = a2;
  v12.right = a3;
  v12.bottom = a4;
  v4 = a1 & 0xF8000000;
  if ( v4 && v4 != -134217728
    || (v5 = a4 & 0xF8000000) != 0 && v5 != -134217728
    || (v6 = a3 & 0xF8000000) != 0 && v6 != -134217728
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    Entry = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, 0x70u);
    v7 = (struct OBJECT *)Entry;
    if ( Entry )
    {
      ERECTL::vOrder((ERECTL *)&v12);
      RGNOBJ::vSet((RGNOBJ *)&Entry, &v12);
      *((_DWORD *)v7 + 20) = GrepIsPreviousModeKernel();
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v13);
      v8 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v13, v7, 0, 1, 4);
      if ( !v8 )
        REGION::vDeleteREGION((unsigned __int64)v7);
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v13);
    }
    else
    {
      v8 = 0LL;
      EngSetLastError(8u);
    }
    return v8;
  }
}
