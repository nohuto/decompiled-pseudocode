/*
 * XREFs of ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0156700
 * Callers:
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C007DD10 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0156EB4 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bCreate(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  __int64 v3; // rax
  unsigned int v6; // ebx
  PVOID v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v6 = 0;
  v9 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v9, *(_DWORD *)(v3 + 48));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v9);
  if ( v9 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v9, this);
    v6 = RGNOBJ::bOutline((RGNOBJ *)&v9, a2, a3);
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v9);
  return v6;
}
