/*
 * XREFs of ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x1800BE02C
 * Callers:
 *     ?WriteInt@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NH@Z @ 0x18004074C (-WriteInt@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_rap.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BD634 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BE188 (-data@-$test_common_data@$00@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ??$process@AEAK@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAK@Z @ 0x18012783C (--$process@AEAK@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAK@Z.c)
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x18018D048 (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$process@I@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAI@Z @ 0x180540E4C (--$process@I@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAI@Z.c)
 *     ??$process@AEBK@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEBK@Z @ 0x1806CAE2C (--$process@AEBK@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEBK@Z.c)
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
  unsigned int v9; // edx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  _BYTE *v12; // r10
  unsigned int v13; // r9d
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // r9

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
    v19 = 2 * ((unsigned int)this / 0x2710 / 0x64);
    v20 = 2 * (v4 / 0x2710 % 0x64);
    v21 = 2 * (v4 % 0x2710 / 0x64);
    v22 = 2 * (v4 % 0x2710 % 0x64);
    if ( v4 < 0x989680 )
    {
      if ( v4 < 0xF4240 )
      {
        if ( v4 < 0x186A0 )
          goto LABEL_18;
        goto LABEL_17;
      }
    }
    else
    {
      *a2 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v19];
      v3 = a2 + 1;
    }
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v19 + 1)];
LABEL_17:
    *v3++ = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v20];
LABEL_18:
    *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v20 + 1)];
    v3[1] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v21];
    v3[2] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v21 + 1)];
    v3[3] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v22];
    v3 += 4;
    v7 = (unsigned int)(v22 + 1);
    goto LABEL_6;
  }
  v9 = (unsigned int)this / 0x5F5E100;
  v10 = (unsigned int)this % 0x5F5E100;
  if ( (unsigned int)this / 0x5F5E100 < 0xA )
  {
    *v3 = v9 + 48;
    v12 = v3 + 1;
  }
  else
  {
    v11 = 2 * v9;
    *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v11];
    v3[1] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v11 + 1)];
    v12 = v3 + 2;
  }
  v13 = v10 / 0x2710;
  v14 = v10 % 0x2710;
  v15 = 2 * (v13 / 0x64);
  v16 = 2 * (v13 % 0x64);
  v17 = 2 * (v14 / 0x64);
  *v12 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v15];
  v18 = 2 * (v14 % 0x64);
  v12[1] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v15 + 1)];
  v12[2] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v16];
  v12[3] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v16 + 1)];
  v12[4] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v17];
  v12[5] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[(unsigned int)(v17 + 1)];
  v12[6] = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v18];
  v3 = v12 + 7;
  v7 = (unsigned int)(v18 + 1);
LABEL_6:
  *v3 = `tip_rapidjson::internal::GetDigitsLut'::`2'::cDigitsLut[v7];
  return v3 + 1;
}
