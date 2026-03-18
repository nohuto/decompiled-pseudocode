/*
 * XREFs of ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C0130EE8
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C01309F0 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C0131030 (-vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C013105C (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z @ 0x1C01310BC (-bMiterInLimit@WIDENER@@IEAAHVEVECTORFX@@@Z.c)
 *     ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C0131128 (-bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z.c)
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C013152C (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0131574 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z @ 0x1C01315BC (-bTurnLeftRandom@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0131D00 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02CDE10 (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 */

void __fastcall WIDENER::vAddJoin(WIDENER *this, int a2)
{
  int v2; // eax
  __int64 v4; // rdx
  struct _POINTFIX *v5; // rdi
  struct EVECTORFX *v6; // rcx
  struct EVECTORFX *v7; // rdx
  int v8; // r14d
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // r8d
  WIDEPATHOBJ *v13; // rcx
  int v14; // r8d
  int v15; // r14d
  int v16; // r8d
  int v17; // r8d
  WIDEPATHOBJ *v18; // rcx
  int v19; // r8d
  int v20; // [rsp+60h] [rbp+30h] BYREF
  int v21; // [rsp+64h] [rbp+34h]
  int v22; // [rsp+70h] [rbp+40h] BYREF
  int v23; // [rsp+74h] [rbp+44h]
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF

  v2 = *((_DWORD *)this + 322);
  if ( !v2 || a2 )
  {
    WIDENER::vAddRoundJoin(this, a2);
    return;
  }
  v4 = *((_QWORD *)this + 89);
  v5 = (struct _POINTFIX *)((char *)this + 692);
  v6 = (struct EVECTORFX *)(*((_QWORD *)this + 88) + 48LL);
  v7 = (struct EVECTORFX *)(v4 + 48);
  if ( v2 == 1 )
  {
    v15 = bTurnLeftRandom(v6, v7);
    WIDENER::vecInPerp(this, &v20);
    WIDENER::vecOutPerp(this, &v22);
    WIDENER::vAddLeft(this, (struct EVECTORFX *)&v20, v16);
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v20,
      0);
    if ( v20 != v22 || v21 != v23 )
    {
      v18 = (WIDENER *)((char *)this + 984);
      if ( !v15 )
        v18 = (WIDENER *)((char *)this + 1136);
      WIDEPATHOBJ::vAddPoint(v18, (struct _POINTFIX *)((char *)this + 692), v17);
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v22,
        0);
      WIDENER::vAddLeft(this, (struct EVECTORFX *)&v22, v19);
    }
  }
  else
  {
    v8 = bTurnLeftRandom(v6, v7);
    WIDENER::vecInPerp(this, &v20);
    WIDENER::vecOutPerp(this, &v22);
    WIDENER::vAddLeft(this, (struct EVECTORFX *)&v20, v9);
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v20,
      0);
    if ( v20 != v22 || v21 != v23 )
    {
      v10 = *((_QWORD *)this + 89);
      v11 = *((_QWORD *)this + 88);
      v24 = 0LL;
      if ( (unsigned int)bComputeIntersect(
                           (struct EVECTORFX *)&v20,
                           (struct EVECTORFX *)(v11 + 40),
                           (struct EVECTORFX *)&v22,
                           (struct EVECTORFX *)(v10 + 40),
                           (struct EVECTORFX *)&v24)
        && (unsigned int)WIDENER::bMiterInLimit(this, v24) )
      {
        if ( v8 )
        {
          WIDEPATHOBJ::vAddPoint(
            (WIDENER *)((char *)this + 1136),
            (struct _POINTFIX *)((char *)this + 692),
            (struct EVECTORFX *)&v24,
            0);
LABEL_9:
          v13 = (WIDENER *)((char *)this + 984);
LABEL_10:
          WIDEPATHOBJ::vAddPoint(v13, v5, v12);
          WIDENER::vAddLeft(this, (struct EVECTORFX *)&v22, v14);
          WIDEPATHOBJ::vAddPoint(
            (WIDENER *)((char *)this + 1136),
            (struct _POINTFIX *)((char *)this + 692),
            (struct EVECTORFX *)&v22,
            0);
          return;
        }
        WIDENER::vAddLeft(this, (struct EVECTORFX *)&v24, v12);
      }
      else if ( v8 )
      {
        goto LABEL_9;
      }
      v13 = (WIDENER *)((char *)this + 1136);
      goto LABEL_10;
    }
  }
}
