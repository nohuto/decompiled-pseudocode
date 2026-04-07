/*
 * XREFs of ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x180043BA4
 * Callers:
 *     ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x180042610 (--$process@H@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z.c)
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x180042794 (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$process@AEAG@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAG@Z @ 0x1800F2804 (--$process@AEAG@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAG@Z.c)
 *     ??$process@AEAJ@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z @ 0x1800F28B0 (--$process@AEAJ@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall tip_rapidjson::internal::u32toa(tip_rapidjson::internal *this, _BYTE *a2, char *a3)
{
  _BYTE *v3; // r10
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  _BYTE *v16; // r10
  unsigned int v17; // r9d
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rbx

  v3 = a2;
  v4 = (unsigned int)this;
  if ( (unsigned int)this < 0x2710 )
  {
    v5 = 2 * ((unsigned int)this / 0x64);
    v6 = 2 * (v4 % 0x64);
    if ( v4 >= 0x3E8 )
    {
      *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v5];
    }
    else if ( v4 < 0x64 )
    {
      if ( v4 < 0xA )
      {
LABEL_5:
        v7 = (unsigned int)(v6 + 1);
        goto LABEL_6;
      }
LABEL_9:
      *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v6];
      goto LABEL_5;
    }
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v5 + 1)];
    goto LABEL_9;
  }
  if ( (unsigned int)this < 0x5F5E100 )
  {
    v9 = 2 * ((unsigned int)this / 0x2710 / 0x64);
    v10 = 2 * (v4 / 0x2710 % 0x64);
    v11 = 2 * (v4 % 0x2710 / 0x64);
    v12 = 2 * (v4 % 0x2710 % 0x64);
    if ( v4 < 0x989680 )
    {
      if ( v4 < 0xF4240 )
      {
        if ( v4 < 0x186A0 )
          goto LABEL_15;
        goto LABEL_14;
      }
    }
    else
    {
      *a2 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v9];
      v3 = a2 + 1;
    }
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v9 + 1)];
LABEL_14:
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v10];
LABEL_15:
    *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v10 + 1)];
    v3[1] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v11];
    v3[2] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v11 + 1)];
    v3[3] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v12];
    v3 += 4;
    v7 = (unsigned int)(v12 + 1);
    goto LABEL_6;
  }
  v13 = (unsigned int)this / 0x5F5E100;
  v14 = (unsigned int)this % 0x5F5E100;
  if ( (unsigned int)this / 0x5F5E100 < 0xA )
  {
    *v3 = v13 + 48;
    v16 = v3 + 1;
  }
  else
  {
    v15 = 2 * v13;
    *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v15];
    v3[1] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v15 + 1)];
    v16 = v3 + 2;
  }
  v17 = v14 / 0x2710;
  v18 = v14 % 0x2710;
  v19 = 2 * (v17 / 0x64);
  v20 = 2 * (v17 % 0x64);
  v21 = 2 * (v18 / 0x64);
  *v16 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v19];
  v22 = 2 * (v18 % 0x64);
  v16[1] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v19 + 1)];
  v16[2] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v20];
  v16[3] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v20 + 1)];
  v16[4] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v21];
  v16[5] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v21 + 1)];
  v16[6] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v22];
  v3 = v16 + 7;
  v7 = (unsigned int)(v22 + 1);
LABEL_6:
  *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v7];
  return v3 + 1;
}
